import java.util.Scanner;

public class ApeU3 {

    private static Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        float[][] m1 = new float[2][3];
        float[][] m2 = new float[2][3];
        float[][] resultado = new float[2][3];

        completarMatrices(m1, 1);
        completarMatrices(m2, 2);
        sumaMatriz(m1, m2, resultado);
        mostrarResultado(resultado, "Suma");
        restaMatriz(m1, m2, resultado);
        mostrarResultado(resultado, "resta");
        multiplicacionMatriz(m1, m2, resultado);
        mostrarResultado(resultado, "multiplicacion");
        divMatriz(m1, m2, resultado);
        mostrarResultado(resultado, "division");
    }

    public static void completarMatrices(float[][] matriz, int a) {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                System.out.printf("Escriba el valor en la matriz %d para [%d][%d] %n", a, i, j);
                matriz[i][j] = scanner.nextFloat();
            }
        }
        System.out.println();
    }

    public static void sumaMatriz(float[][] a, float[][] b, float[][] resultado) {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                resultado[i][j] = a[i][j] + b[i][j];
            }
        }
        System.out.println();
    }

    public static void multiplicacionMatriz(float[][] a, float[][] b, float[][] resultado) {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                resultado[i][j] = a[i][j] * b[i][j];
            }
        }
    }

    public static void restaMatriz(float[][] a, float[][] b, float[][] resultado) {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                resultado[i][j] = a[i][j] - b[i][j];
            }
        }
    }

    public static void divMatriz(float[][] a, float[][] b, float[][] resultado) {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                resultado[i][j] = a[i][j] / b[i][j];
            }
        }
    }

    public static void mostrarResultado(float[][] matriz, String a) {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                System.out.printf("la %s en la ubicacion [%d][%d] es: %.2f %n",a, i, j, matriz[i][j]);
            }
        }
        System.out.println();
    }
}
