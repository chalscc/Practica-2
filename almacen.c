
typedef struct {
 float valor; // Valor a almacenar
 int suelo; // Valor a almacenar sin decimales
 int techo; // Valor a almacenar sin decimales + 1.0
 char *str; // Contiene el valor num�rico convertido a texto
} elemento;
typedef struct {
 int capacidad; // Capacidad actual del almac�n
 int num_elementos; // N�mero de elementos en el almac�n
 elemento **vector_punteros; // Vector de punteros a elemento del almac�n (doble puntero)
} almacen;
