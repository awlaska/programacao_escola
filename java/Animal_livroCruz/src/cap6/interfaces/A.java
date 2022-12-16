package cap6.interfaces;

public class A {
    private B serv;
    public A(){
        this.serv = new B();
    }
    public void comportamento(int z){
        int y = serv.m2();
        serv.m1(y+z);
    }

    private ContratoM1M2 serv1;

    public A(ContratoM1M2 serv){
        this.serv1 = serv;
    }

    public void comportamento(int z){
        int y = serv.m2();
        serv.m1(y+z);
    }
}
