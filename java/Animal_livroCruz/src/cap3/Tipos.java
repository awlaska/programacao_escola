package cap3;

public class Tipos {
    public static void main(String[] args) {
        int n, i=0;
        float x, y, z;
        char c = 'a';
        x = 5; y = 9; z = 13;
        i = 2;
        x = y/2;
        System.out.println("x = " + x);
        i = (int)(z/y);
        System.out.println("i = " + i);
        System.out.println("z/y = " + (z/y));
        n = c; //n fica com o codigo ASCII do caracter 'a'
        System.out.println("c = " + c);
        System.out.println("n = " + n);

        int arrInt[] = new int[10];
        char arrCar[] = new char[15];

        arrInt[0] = 5;
        arrInt[1] = 3;
        arrCar[0] = 'o';
        arrCar[1] = 'l';
        arrCar[2] = 'a';
        System.out.println(arrInt[0] + arrInt[1]);
        System.out.println(arrCar[0] + arrCar[1] + arrCar[2]);

        int inteiros[] = {1, 5, 8, 12, 9, 34, 7, 10, 2, 8};

        String nome = "Ana Maria Silva";
        System.out.println(nome.length());
        System.out.println(nome.charAt(4));
        System.out.println(nome.substring(4, 9));
        System.out.println(nome.isEmpty());
        System.out.println(nome.concat(" ola, ola!"));

        x=0;
        y=0;
        z=0;
        x++;
        y = y + (x++);
        z = z + (++x);
        System.out.println("x = " + x);
        System.out.println("y = " + y);
        System.out.println("z = " + z);
        y += 3;
        System.out.println("y = " + y);

        x=3;
        y=5;
        z=7;
        boolean a, b, c1, d, e, f;

        a = (x == y);
        b = (x != y);
        c1 = (x < z);
        d = (x <= y);
        e = (y > z);
        f = (z >= y);


    }
}
