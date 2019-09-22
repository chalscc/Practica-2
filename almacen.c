
typedef struct {
 float valor; // Valor a almacenar
 int suelo; // Valor a almacenar sin decimales
 int techo; // Valor a almacenar sin decimales + 1.0
 char *str; // Contiene el valor numérico convertido a texto
} elemento;
typedef struct {
 int capacidad; // Capacidad actual del almacén
 int num_elementos; // Número de elementos en el almacén
 elemento **vector_punteros; // Vector de punteros a elemento del almacén (doble puntero)
} almacen;
