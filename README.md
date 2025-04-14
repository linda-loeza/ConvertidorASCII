
# 🖼️ Convertidor de Imágenes a ASCII

**Integrantes**:  
- Victor (`cargaImagenes.c`)  
- Kevin (`procesamiento.c`)  
- Natalia (`conversionAscii.c`)  
- Roberto (`guardado.c`)  
- Edrei (`main.c`)

---
## Requisitos
- Compilador GCC 
- Biblioteca `stb_image.h` (despues la incluire en el proyecto)

---
## 🚀 **Inicio**  
1. **Clonar el repositorio**:  
   ```bash  
   git clone https://github.com/tuusuario/EquipoConvertidorASCII.git  
   cd EquipoConvertidorASCII  

2. **Flujo de trabajo**: 

   IMPORTANTE - Antes de trabajar en el proyecto ejecutar 
   ```bash  
   git pull origin main
Trabaja solamente en el archivo que le corresponda

Posteriormente preparar el archivo para la subida con:
    ```
    git add archivo.c```

Realizar el commit con un comentario relacionado a los cambios ```
    git commit -m "comentario(ej. Cambios en funcion conversionAscii)"```

**Nota**: Si se modifica la *cabecera* de una funcion es importante editar su correspondiente *cabecera* en la librería del proyecto **funciones.h** para que todos puedan utilizarla, de lo contrario van a haber conflictos entre los parametros o nombres. De igual manera se tendra que actualizar en el repositorio el archivo **funciones.h**, si aparece algun conflicto avisen por whatsapp para solucionarlo.

Enviar el commit al repositorio de manera definitiva: ```
    git push origin main```

---

## Estructura del proyecto

    /
    ├── main.c  # Archivo principal (Edrei)
    ├── cargaImagenes.c  # Carga y validación de imágenes (Victor)
    ├── procesamiento.c # Conversión a escala de grises (Kevin)
    ├── conversionAscii.c # Conversión a caracteres ASCII (Natalia)
    ├── guardado.c  # Guardado en archivo .txt (Roberto) 
    ├── funciones.h # Declaraciones compartidas/Libreria del proyecto
    ├── README.md   # Este archivo
    ├── Manual Usuario.pdf   # Documentacion (Edrei)


## Compilado  
```bash
gcc main.c cargaImagenes.c procesamiento.c conversionAscii.c guardado.c -o ascii_art -lm