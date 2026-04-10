# tp1
## Punto 2
### ¿Por que es conveniente incluir un archivo .gitignore a nuestros proyectos?
Cuando se trabaja en un proyecto, se generan archivos que no deberían subirse a github, como:
- _Seguridad:_  archivos .env con contraseñas, API keys, tokens
- _Peso:_ node_modules/ puede pesar cientos de MB innecesariamente
- _Basura:_ archivos temporales del sistema como .DS_Store (Mac) o Thumbs.db (Windows)
- _Configuración local:_ settings de tu IDE que no le sirven a nadie más

### ¿Cuándo se debe hacer?
Lo antes posible — idealmente antes del primer commit.

### ¿Cómo se configura?
Creás un archivo llamado exactamente .gitignore en la raíz del proyecto y escribís los patrones:

_Archivos del sistema_
.DS_Store
Thumbs.db

_Variables de entorno (¡NUNCA subir esto!)_
.env
.env.local

_Dependencias_
node_modules/
vendor/

_Archivos compilados_
*.class
*.pyc
bin/
dist/

_Logs_
*.log

_IDEs_
.idea/
.vscode/