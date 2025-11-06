# Imagen base oficial de GCC
FROM gcc:latest

# Directorio de trabajo dentro del contenedor
WORKDIR /app

# Copiar los archivos del proyecto
COPY . .

# Compilar el programa
RUN make build

# Definir el comando que se ejecuta al iniciar el contenedor
ENTRYPOINT ["./reto10"]
