def completar_matrices(matriz, a):
    for i in range(2):
        for j in range(3):
            matriz[i][j] = float(input(f"Escriba el valor en la matriz {a} para [{i}][{j}] \n"))
    print()

def suma_matriz(a, b, resultado):
    for i in range(2):
        for j in range(3):
            resultado[i][j] = a[i][j] + b[i][j]
    print()

def multiplicacion_matriz(a, b, resultado):
    for i in range(2):
        for j in range(3):
            resultado[i][j] = a[i][j] * b[i][j]

def resta_matriz(a, b, resultado):
    for i in range(2):
        for j in range(3):
            resultado[i][j] = a[i][j] - b[i][j]

def division_matriz(a, b, resultado):
    for i in range(2):
        for j in range(3):
            resultado[i][j] = a[i][j] / b[i][j]

def mostrar_resultado(matriz, a):
    for i in range(2):
        for j in range(3):
            print(f"la {a} en la ubicacion [{i}][{j}] es: {matriz[i][j]:.2f}")
    print()

def main():
    m1 = [[0.0 for _ in range(3)] for _ in range(2)]
    m2 = [[0.0 for _ in range(3)] for _ in range(2)]
    resultado = [[0.0 for _ in range(3)] for _ in range(2)]

    completar_matrices(m1, 1)
    completar_matrices(m2, 2)
    suma_matriz(m1, m2, resultado)
    mostrar_resultado(resultado, "suma")
    resta_matriz(m1, m2, resultado)
    mostrar_resultado(resultado, "resta")
    multiplicacion_matriz(m1, m2, resultado)
    mostrar_resultado(resultado, "multiplicacion")
    division_matriz(m1, m2, resultado)
    mostrar_resultado(resultado, "division")

if __name__ == "__main__":
    main()
