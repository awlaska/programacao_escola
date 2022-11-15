package folha4;

import folha3.Climatizador;

public class Sensor {
    //DONE b) Um atributo de instância de acesso privado, sensor, com tipo Sensor,
    // que permite ler a temperatura de um sensor.
    private Sensor sensor;

    //DONE c) Um array de quatro Climatizadores, clima (atributo de instância de acesso privado),
    // que podem ser usados para aquecer, arrefecer, ou apenas ventilar o espaço.
    private Climatizador clima[];

    //DONE d) Um atributo de instância de acesso privado, tempMin, inteiro,
    // para definir a temperatura mínima desejada para o armazém.
    private int tempMin;

    //DONE e) Um atributo de instância de acesso privado, tempMax, inteiro,
    // para definir a temperatura máxima desejada para o armazém.
    private int tempMax;

    //DOING f) Um construtor sem parâmetros, que deve inicializar o sensor e o array de climatizadores com 4 climatizadores.
    public void Sensor(){
        sensor = new Sensor;
        Climatizador[] clima = new Climatizador[4];
    }

    //DOING g) Um construtor para receber e definir as temperaturas mínima e máxima para a unidade de controlo,
    // e onde também devem ser inicializados o sensor e o array de climatizadores com 4 climatizadores.
    public Sensor(int tempMin, int tempMax) {
        sensor = new Sensor();
        Climatizador clima = new Climatizador();
        this.tempMin = tempMin;
        this.tempMax = tempMax;
    }

    //DONE h) Os métodos getter e setter para tempMin e tempMax.
    public int getTempMin() {
        return tempMin;
    }

    public void setTempMin(int tempMin) {
        this.tempMin = tempMin;
    }

    public int getTempMax() {
        return tempMax;
    }

    public void setTempMax(int tempMax) {
        this.tempMax = tempMax;
    }

    //DONE i) Os métodos getter e setter para sensor.
    public Sensor getSensor() {
        return sensor;
    }

    public void setSensor(Sensor sensor) {
        this.sensor = sensor;
    }

    //DONE j) O método getter para o array de climatizadores.
    public Climatizador[] getClima() {
        return clima;
    }

    //DOING k) Um método controlar() que deve aquecer ou arrefecer o armazém conforme a temperatura medida pelo sensor seja inferior à mínima ou superior à máxima, respetivamente.
    public void controlar(){}

    //DONE l) Um método informacao() que deve imprimir para o ecrã informação sobre a temperatura do sensor, a mínima e máxima, e o estado de cada um dos climatizadores.
    public String informacao(){
        return "A temperatura mínima é " + this.tempMin + " e a máxima é " + this.tempMax + ". Sensor 1: "
                + this.sensor.toString();
    }
}
