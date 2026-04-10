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

## Punto 3
### Correcciones al programa "codigo_sin_funcionar.c"
- Se añadio un "&" al primer scanf que recibia valor1
- Se añadio ";" donde hacia falta
- Se modifico la declaracion de la varible "suma"
- Se cambio el tipo de la funcion "duplicar_numero" del tippo void a int y a su llamada se añadio "valor1 = duplicar_numero(valor1);", para que reciba el valor duplicado de la entrada

### Funcionamiento del programa "codigo_misterioso.c"
- _f-alpha:_ esta funcion invierte el numero apuntado, se la renombro como "invertir_numero"
- _f-beta:_ divide el numero apuntado en dos, se la renombro a "dividir_numero"
- _f-gamma:_ suma los digitos del numero al mismo numero, se la renombro a "sumar_digitos"