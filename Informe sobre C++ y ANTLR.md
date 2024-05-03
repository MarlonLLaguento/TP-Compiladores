# Informe sobre C++ y ANTLR

## C++

El siguiente código en C++ es un ejemplo de un evaluador de expresiones en notación polaca inversa utilizando ANTLR como generador de analizadores sintácticos.

### Clases y Funciones

- `EvalVisitor`: Esta clase se deriva de `Polaca` y proporciona la implementación de las funciones de visita para las operaciones binarias y enteros.
- `main`: La función principal inicia el proceso de análisis sintáctico utilizando ANTLR. Toma una cadena de entrada que contiene una expresión en notación polaca inversa, analiza la expresión y la evalúa utilizando el visitante definido.

### Ejecución

El código toma una cadena de entrada que representa una expresión en notación polaca inversa ("4 5 + 3 *"), la analiza y la evalúa, luego imprime el resultado en la consola.

## ANTLR

El siguiente código ANTLR define un lexer y un parser para analizar expresiones matemáticas en notación polaca inversa.

### Lexer

- `lexer grammar Lexer`: Define tokens para operadores matemáticos (*, /, +, -) y números enteros.

### Parser

- `parser grammar Parser`: Define reglas para analizar la estructura de una expresión en notación polaca inversa.

### Reglas de Parsing

- `exp`: Define la estructura de una expresión, donde puede ser un número entero (`NUM`) o una combinación de expresiones con operadores (`'*'`, `'/'`, `'+'`, `'-'`).

### Comentarios

El código ANTLR define un lexer y un parser para analizar expresiones matemáticas en notación polaca inversa. Sin embargo, parece que algunas partes del código están comentadas, como las reglas `program` y `stat`. Esto podría ser porque aún no están implementadas o porque se están probando diferentes estructuras de gramática.

Ambos códigos parecen estar bien estructurados y cumplir con su propósito de analizar y evaluar expresiones matemáticas en notación polaca inversa. Si necesitas más detalles sobre algún aspecto específico de estos códigos, no dudes en preguntar.
