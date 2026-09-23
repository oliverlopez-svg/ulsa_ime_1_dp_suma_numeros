# Práctica 1: Suma de 5 números
## 1. Descripción del problema (Fase 1)
<sumar 5 numeros
_____

## 2. Entradas y salidas (Fase 1)
<!-- Define cada entrada y cada salida, con su tipo de dato y su objetivo. -->

**Entradas:**
1. in: 
5 números 

**Salidas:**
1. suma de 5 números

## 3. Restricciones e invariante (Fase 1 y 2)

**Restricciones** (¿qué debe cumplirse?):
- datos numericos
- 5 numeros

**Decisión sobre negativos y decimales** (¿los acepto? ¿por qué?):
Si, por que son datos numericos

**Invariante** (¿qué es verdad después de cada vuelta del ciclo?):
suma de 5 numeros, dato numerico

## 4. Casos resueltos a mano (Fase 1)

| Caso | Números | Suma calculada a mano |
1.- 1 2 3 4 5 = 15
2.- 2.1, 0.1, 0.1, 0.1, 0.1 = 2.5
3.- 3 2 5 5 10 = 30

## 5. Receta en pseudocódigo (Fase 2)
rooney@MacBook-Neo-de-Oliver ulsa_ime_1_dp_suma_numeros % ./suma
ingresar numero
1
ingresar numero
1
ingresar numero
1
ingresar numero
1
ingresar numero
1
Suma de 5 numeros
rooney@MacBook-Neo-de-Oliver ulsa_ime_1_dp_suma_numeros % 

**¿Probé mi receta a mano con un caso?** Sí / No
**¿Tuve que corregirla?** _____

## 6. Cómo compilar y ejecutar (Fase 3)

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o suma
./suma
```

## 7. Ejemplo de ejecución (Fase 3)
ingresar numero
1
ingresar numero
1
ingresar numero
1
ingresar numero
1
ingresar numero
1
Suma de 5 numeros

## 8. Experimentos (Fase 3)

**Experimento A: ¿qué pasó al no inicializar `suma`?**
no sumo
_____

**Experimento B (opcional): ¿qué pasó al usar `int` con 2.5?**
no sumo
_____

## 9. Tabla de pruebas (Fase 4)

| Caso | Números | Esperado | Obtenido | ¿Pasó? |
|---|---|---|---|---|
| Del 1 al 5 | 1 a 5 | 15 | _____ | _____ |
| Todos ceros | 0 ×5 | 0 | _____ | _____ |
| Con negativos | _____ | _____ | _____ | _____ |
| Decimales | 0.5 ×5 | 2.5 | _____ | _____ |
| Todos iguales | 7 ×5 | 35 | _____ | _____ |
| Caso propio 1 | _____ | _____ | _____ | _____ |
| Caso propio 2 | _____ | _____ | _____ | _____ |

*no suma los numeros

## 10. Bitácora de mejoras (Fase 4)

| # | ¿Qué falló o qué quise mejorar? | ¿Qué cambié? | ¿Funcionó? |
|---|---|---|---|
| 1 | _____ | _____ | _____ |
| 2 | _____ | _____ | _____ |

que el codigo ejecute al sumar numeros
**Reto elegido (opcional):** _____

## 11. Dudas para el profesor (Fase 3)

| Duda | Lo que ya intenté |
|---|---|
| _____ | _____ |
pues que no suma
## 12. Reflexión final

**¿Qué aprendí con esta práctica?**
_____q significan cosas del codigo

**Ahora que terminé, ¿qué cambiaría de mi proceso?**
_____la receta

**¿Qué fue lo más difícil y cómo lo resolví?**
_____la sintaxis, aprendiendola

**¿Qué pregunta me quedó sin responder?**
_____por que no suma

## 13. Lista de verificación antes de entregar (Fase 5)

- [ ] Llené todas las secciones (no quedan `_____`)si
- [ ] Mi programa compila sin advertencias. si
- [ ] Probé todos los casos de la tabla. si
- [ ] Hice al menos 3 commits con mensajes claros. si
- [ ] Hice `git push` y verifiqué mi fork en GitHub. si
- [ ] Entregué el enlace de mi fork en Classroom. si