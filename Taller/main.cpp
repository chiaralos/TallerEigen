#include <iostream>
#include <eigen3/Eigen/Dense>

/*Tipo de dato Matriz entera de 2x3*/
typedef Eigen::Matrix<int, 2, 3> MiMatriz2x3i;
/*Tipo de dato Matriz entera de 3x2 */
typedef Eigen::Matrix<int, 3, 2> MiVMatriz3x2i;
/*Tipo de dato Matriz doble de 2x3*/
typedef Eigen::Matrix<double, 2, 3> MiMatriz2x3d;
/*Tipo de dato Matriz doble de 3x2*/
typedef Eigen::Matrix<double, 3, 2> MiVMatriz3x2d;

int main()
{
     std::cout <<"***************************EJERCICIO A - PUNTO 1 ******************************* "<< std::endl;
    //Se declaran los tipos de datos a usar
     Eigen::Matrix2i A, B, X;

    //Se inicializan manualmente las matrices A y B mencionadas
     A << 4, -2, 1, -7;
     B << -1, 2, 6, -5;

    //Se imprimen las matrices iniciales
     std::cout <<" Matriz A\n"<< A << std::endl;
     std::cout <<"\n Matriz B\n"<< B << std::endl;

    //************************ OPERACIONES ELEMENTWISE ***************************
    //Se requiere que la matriz A y B sean multiplicadas por 3 y 4 respectivamente
     A = A.array() * 3;
     B = B.array() * 4;

    //Se imprimen las matrices luego de ser multiplicadas por los respectivos escalares
     std::cout <<"\n* Matrices luego de ser multiplicadas por los respectivos escalares \n"<< std::endl;
     std::cout <<" Matriz A\n"<< A << std::endl;
     std::cout <<"\n Matriz B\n"<< B << std::endl;

     //Se requiere restar la matriz A con la B
     X = A - B;

     // Se imprime la matriz X
     std::cout <<"\n Matriz resultante a-b\n"<< X << std::endl;

  std::cout <<"***************************EJERCICIO B - PUNTO 2 ******************************* "<< std::endl;
     //Se declaran los tipos de datos a usar
      Eigen::Matrix2f A2, B2, X2;

     //Se inicializan manualmente las matrices A y B mencionadas
      A2 << 0, -1, 2, 1;
      B2 << 1, 2, 3, 4;

     //Se imprimen las matrices iniciales
      std::cout <<"  Matriz A\n"<< A2 << std::endl;
      std::cout <<"\n Matriz B\n"<< B2 << std::endl;

     //Se requiere que la matriz B sea igual a si misma multiplicada por la matriz A y por 3
      //Se requiere que la matriz A sea igual a si misma multiplicada por 4
      B2 = B2 * A2 * 3;
      A2 = 4 * A2;

      //Se requiere ver las matrices luego de las operaciones
      std::cout <<"  Matriz A\n"<< A2 << std::endl;
      std::cout <<"\n Matriz B\n"<< B2 << std::endl;

     // Se requiere restar B - A y dividirlo en dos
      X2 =( B2 - A2 )/ 2;

      std::cout <<"\n Matriz resultante\n"<< X2 << std::endl;

  std::cout <<"***************************EJERCICIO D - PUNTO 3 ******************************* "<< std::endl;
      //Se declaran los tipos de datos a usar
       Eigen::Matrix2d A3, B3, X3, mA3;

      //Se inicializan manualmente las matrices A y B mencionadas
       A3 << 2, 1, -4, -3;
       B3 << 2, 2, 6, 4;

      //Se imprimen las matrices iniciales
       std::cout <<"  Matriz A\n"<< A3 << std::endl;
       std::cout <<"\n Matriz B\n"<< B3 << std::endl;

       //Se requiere dividr la matriz B por A
       mA3 = A3.inverse();
       X3 = B3 * mA3;

       std::cout <<"\n Matriz resultante\n"<< X3 << std::endl;

  std::cout <<"***************************EJERCICIO E - PUNTO 4 ******************************* \n"<< std::endl;
   //Se declaran los tipos de datos a usar
   MiMatriz2x3i A4;
   MiVMatriz3x2i B4;
   Eigen::Matrix2i C4;
   Eigen::MatrixXi X4;

   //Se inicializan manualmente las matrices A, B y C mencionadas
    A4 << 3, 0, -1, 0, 2, 1;
    B4 << 1, 2, 1, 0, 0, 6;
    C4 <<-2, 0, -2, -5;

   //Se imprimen las matrices iniciales
    std::cout <<" Matriz A\n"<< A4 << std::endl;
    std::cout <<"\n Matriz B\n"<< B4 << std::endl;
    std::cout <<"\n Matriz C\n"<< C4 << std::endl;

    // Se hace la operación indicada 2(AB+C)
    X4 = A4 * B4;
    X4 = X4 + C4;
    X4 = X4.array() * 2;

    // Se imprime la matriz resultante
    std::cout <<"\n Matriz Resultante\n"<< X4 << std::endl;

  std::cout <<"***************************EJERCICIO F - PUNTO 5 ******************************* \n"<< std::endl;
    //Se declaran los tipos de datos a usar

    Eigen::Matrix3i A5, B5, X5;

    //Se inicializan manualmente las matrices A y B mencionadas
     A5 << 1, 5, -1, -1, 2, 2, 0, -3, 3;
     B5 << -1, -4, 3, 1, -2, -2, -3, 3, -5;

    //Se imprimen las matrices iniciales
     std::cout <<" Matriz A\n"<< A5 << std::endl;
     std::cout <<"\n Matriz B\n"<< B5 << std::endl;

     // Se hace la operación indicada A + 3B
     B5 = B5.array() * 3;
     X5 = A5 + B5;

     // Se imprime la matriz resultante
     std::cout <<"\n Matriz Resultante\n"<< X5 << std::endl;

 std::cout <<"***************************EJERCICIO G - PUNTO 6 ******************************* \n"<< std::endl;
     //Se declaran los tipos de datos a usar
     Eigen::Matrix3d A6, B6, X6, mA6;

     //Se inicializan manualmente las matrices A y B mencionadas
      A6 << 2, 7, 3,  3, 9, 4, 1, 5, 3;
      B6 << 1, 0, 2, 0, 1, 0, 0, 0, 1;

     //Se imprimen las matrices iniciales
      std::cout <<" Matriz A\n"<< A6 << std::endl;
      std::cout <<"\n Matriz B\n"<< B6 << std::endl;

      // Se hace la operación indicada B / A
      mA6 = A6.inverse();
      X6 = B6 * mA6;

      // Se imprime la matriz resultante
      std::cout <<"\n Matriz Resultante\n"<< X6 << std::endl;

  std::cout <<"***************************EJERCICIO H - PUNTO 7 ******************************* \n"<< std::endl;
      //Se declaran los tipos de datos a usar
      Eigen::Matrix3d A7, B7, X7, mA7;

      //Se inicializan manualmente las matrices A y B mencionadas
       A7 << 1, 1, 1, 6, 5, 4, 13, 10, 8;
       B7 << 0, 1, 2, 1, 0, 2, 1, 2, 0;

      //Se imprimen las matrices iniciales
       std::cout <<" Matriz A\n"<< A7 << std::endl;
       std::cout <<"\n Matriz B\n"<< B7 << std::endl;

       // Se hace la operación indicada A / B
       mA7 = A7.inverse();
       X7 = mA7 * B7;

       // Se imprime la matriz resultante
       std::cout <<"\n Matriz Resultante\n"<< X7 << std::endl;

   std::cout <<"***************************EJERCICIO I - PUNTO 8 ******************************* \n"<< std::endl;
       //Se declaran los tipos de datos a usar
       Eigen::Matrix2i A8, tA8, mA8, X8;
       //Se inicializan manualmente las matriz A mencionada
        A8 << 3, -1, 0, 2;

       //Se imprime la matriz inicial
        std::cout <<" Matriz A\n"<< A8 << std::endl;

        // Se hace la operación indicada tA+A - 2A
        tA8 = A8.transpose();
        mA8= A8.array() * 2;
        X8 = tA8 * A8;
        X8 = X8 - mA8;

        // Se imprime la matriz resultante
        std::cout <<"\n Matriz Resultante\n"<< X8 << std::endl;

  std::cout <<"***************************EJERCICIO J - PUNTO 9 ******************************* \n"<< std::endl;
    //Se declaran los tipos de datos a usar
    Eigen::Matrix2i A9, X9;
    //Se inicializan manualmente las matriz A mencionada
     A9 << 4, 2, -1, 0;

    //Se imprime la matriz inicial
     std::cout <<" Matriz A\n"<< A9 << std::endl;

     // Se hace la operación indicada A³
     X9 = A9 * A9 * A9;

     // Se imprime la matriz resultante
     std::cout <<"\n Matriz Resultante\n"<< X9 << std::endl;

  std::cout <<"***************************EJERCICIO K - PUNTO 10 ******************************* \n"<< std::endl;
     //Se declaran los tipos de datos a usar
     Eigen::Matrix2d A10, B10, C10, X10, mA10, mB10;
     //Se inicializan manualmente las matrices A, B y C mencionadas
      A10 << 2, 4, 3, 2;
      B10 << 1, 0, 2, 1;
      C10 << 7, 5, 6, 1;

     //Se imprimen las matrices iniciales
      std::cout <<" Matriz A\n"<< A10 << std::endl;
      std::cout <<" Matriz B\n"<< B10 << std::endl;
      std::cout <<" Matriz C\n"<< C10 << std::endl;

      // Se hace la operación indicada
      A10.transposeInPlace();
      mA10 = A10.inverse();
      mB10 = B10.inverse();
      X10 = mA10 * C10 * mB10;

      // Se imprime la matriz resultante
      std::cout <<"\n Matriz Resultante\n"<< X10 << std::endl;

  std::cout <<"***************************EJERCICIO L - PUNTO 11 ******************************* \n"<< std::endl;
     //Se declaran los tipos de datos a usar
     MiMatriz2x3d A11;
     MiVMatriz3x2d B11;
     Eigen::MatrixXd tA11, X11, aux11;
     //Se inicializan manualmente las matrices A y B mencionadas
      A11 << 1, 0, -2, 2, -1, 3;
      B11 << 2, -3, -2, 0, -1, -2;

     //Se imprimen las matrices iniciales
      std::cout <<" Matriz A\n"<< A11 << std::endl;
      std::cout <<" Matriz B\n"<< B11 << std::endl;

      // Se hace la operación indicada A*tA - 2AB
      tA11 = A11.transpose();
      aux11 = A11 * B11;
      aux11 = aux11.array() * 2;
      X11 = A11 * tA11;
      X11 = X11 - aux11;


      // Se imprime la matriz resultante
      std::cout <<"\n Matriz Resultante\n"<< X11 << std::endl;

  std::cout <<"***************************EJERCICIO M - PUNTO 12 ******************************* \n"<< std::endl;
      //Se declaran los tipos de datos a usar
      int datos[] = {4, 8, 12};
      Eigen::VectorXi C12 (2);
      MiVMatriz3x2i B12;
      Eigen::MatrixXi X12;
      //Se inicializan manualmente las matrices B y C mencionadas
       Eigen::Map<Eigen::RowVectorXi> A12(datos,3);
       B12 << 3, 2, 0, 1, -1, 0;
       C12 << 3, -1;

      //Se imprimen las matrices y vectores iniciales
       std::cout <<" Vector A\n"<< A12 << std::endl;
       std::cout <<"\n Matriz B\n"<< B12 << std::endl;
       std::cout <<"\n Vector C\n"<< C12 << std::endl;

       // Se hace la operación indicada A*B*C
       X12 = A12 * B12 * C12;

       // Se imprime la matriz resultante
       std::cout <<"\n Matriz Resultante\n"<< X12 << std::endl;

   std::cout <<"***************************EJERCICIO N - PUNTO 13 ******************************* \n"<< std::endl;
       //Se declaran los tipos de datos a usar
       Eigen::Matrix3d A13, B13, X13, mA13;

       //Se inicializan manualmente las matrices A y B mencionadas
        A13 << 3, 4, 1, -1, -3, 3, 2, 3, 0;
        B13 << 3, 9, 7, 1, 11, 7, 7, 5, 7;

       //Se imprimen las matrices y vectores iniciales
        std::cout <<" Vector A\n"<< A13 << std::endl;
        std::cout <<"\n Matriz B\n"<< B13 << std::endl;

        // Se hace la operación indicada
        A13.transposeInPlace();
        mA13 = A13.inverse();
        X13 = mA13 * B13;

        // Se imprime la matriz resultante
        std::cout <<"\n Matriz Resultante\n"<< X13 << std::endl;

    std::cout <<"***************************EJERCICIO O - PUNTO 14 ******************************* \n"<< std::endl;
        //Se declaran los tipos de datos a usar
        Eigen::Matrix3d A14, B14, X14, mA14;

        //Se inicializan manualmente las matrices A y B mencionadas
         A14 << 2, 5, 7, 6, 3, 4, 5, -2, -3;
         B14 << -1, 1, 0, 0, 1, 1, 1, 0, -1;

        //Se imprimen las matrices iniciales
         std::cout <<" Matriz A\n"<< A14 << std::endl;
         std::cout <<"\n Matriz B\n"<< B14 << std::endl;

         // Se hace la operación indicada
         mA14 = A14.inverse();
         X14 = B14 * mA14;

         // Se imprime la matriz resultante
         std::cout <<"\n Matriz Resultante\n"<< X14 << std::endl;

     std::cout <<"***************************EJERCICIO P - PUNTO 15 ******************************* \n"<< std::endl;
         //Se declaran los tipos de datos a usar
         Eigen::Matrix4d A15, B15, X15, mA15;

         //Se inicializan manualmente las matrices A y B mencionadas
          A15 << 1, 1, 1, 1,
              1, 1, -1, -1,
              1, -1, 1, -1,
              1, -1, -1, 1;

          B15 << 1, 1, 0, 0,
              1, 0, 1, 0,
              1, 0, 0, 1,
              1, 0, 1, 1;

         //Se imprimen las matrices y vectores iniciales
          std::cout <<" Matriz A\n"<< A15 << std::endl;
          std::cout <<"\n Matriz B\n"<< B15 << std::endl;

          // Se hace la operación indicada
          mA15 = A15.inverse();
          X15 = mA15 * B15;

          // Se imprime la matriz resultante
          std::cout <<"\n Matriz Resultante\n"<< X15 << std::endl;

          return 0;
}
