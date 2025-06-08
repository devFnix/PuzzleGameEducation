# PuzzleGameEducation

# Evitar subir archivos grandes y carpetas generadas por Unity a GitHub

Si trabajas con Unity, es importante **no subir carpetas generadas automáticamente** como `Library/`, `Temp/`, `Obj/`, `Build/`, `Builds/`, `Logs/`, `UserSettings/`, `MemoryCaptures/`, ni archivos grandes como `.apk` o librerías nativas. GitHub no permite archivos mayores a 100 MB y recomienda no subir archivos mayores a 50 MB.

## 1. Configura tu `.gitignore`
Asegúrate de que tu archivo `.gitignore` incluya:

```
Library/
Temp/
Obj/
Build/
Builds/
Logs/
UserSettings/
MemoryCaptures/
*.apk
/Library/
/PackageCache/
```

## 2. Elimina archivos ya subidos del índice de Git
Si ya subiste alguna de estas carpetas o archivos, elimínalos del índice (sin borrarlos localmente):

```sh
git rm -r --cached Library/
git rm -r --cached PackageCache/
```

## 3. Haz commit y push
```sh
git add .gitignore
git commit -m "Ignoro Library y PackageCache, elimino archivos grandes del repo"
git push
```

## 4. Si el error persiste: limpia el historial de Git
Si el error sigue, es porque el archivo grande ya está en el historial de Git. Debes borrarlo del historial. **Esto reescribe el historial, así que avisa a tus colaboradores.**

### Usando BFG Repo-Cleaner
1. Descarga [BFG Repo-Cleaner](https://rtyley.github.io/bfg-repo-cleaner/).
2. Ejecuta en la raíz de tu repo:
   ```sh
   java -jar bfg.jar --delete-files "*.dylib"
   ```
3. Limpia y compacta el repo:
   ```sh
   git reflog expire --expire=now --all
   git gc --prune=now --aggressive
   ```
4. Haz push forzado:
   ```sh
   git push --force
   ```

---

**¡Listo!** Así evitarás problemas con archivos grandes y tu repositorio será más limpio y fácil de compartir.