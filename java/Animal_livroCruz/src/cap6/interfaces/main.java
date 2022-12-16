package cap6.interfaces;

public class main {
    public static void main(String[] args) {
        A a = new A();
        a.comportamento(5);

        B z = new B();
        A a1 = new A(z);
        a1.comportamento(5);

        C z = new C();
        A a2 = new A(z);
        a2.comportamento(5);
    }
}
