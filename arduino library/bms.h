#ifndef BMS_H
#define BMS_H

#define MAX_CELULAS 34
#define MAX_PTC 12

#define MIN_TENSAO 2.79
#define MAX_TENSAO 3.63
#define WARNING_TENSAO 3.19
#define WARNING_TEMPERATURA 50

#define OFFSET_TEMPERATURA_VOLT -55

#define MAX_TEMPERATURA 60

#define VREF_HALL 2.5
#define IPN 400


class BMS{
private:

    boolean isMain;
    float temperaturaVolt[206] = {2.71567, 2.72464, 2.73359, 2.7455, 2.75441, 2.76627, 2.77514, 2.784, 2.79578, 2.8046,
                                  2.81633, 2.8251, 2.83678, 2.84552, 2.85424, 2.86584, 2.87452, 2.88608, 2.89472,
                                  2.90622, 2.91769, 2.92628, 2.9377, 2.94624, 2.95761, 2.96612, 2.97744, 2.98874,
                                  2.99719, 3.00843, 3.01684, 3.02804, 3.0392, 3.04756, 3.05868, 3.06977, 3.07807,
                                  3.08911, 3.10012, 3.10837, 3.11933, 3.13027, 3.14119, 3.14935, 3.16022, 3.17106,
                                  3.18187, 3.18997, 3.20073, 3.21147, 3.22219, 3.23288, 3.24354, 3.25152, 3.26214,
                                  3.27273, 3.28329, 3.29383, 3.30435, 3.31484, 3.3253, 3.33574, 3.34355, 3.35395,
                                  3.36432, 3.37466, 3.38498, 3.39528, 3.40555, 3.4158, 3.42602, 3.43622, 3.44639,
                                  3.45654, 3.46667, 3.47929, 3.48936, 3.49941, 3.50943, 3.51943, 3.52941, 3.53937,
                                  3.5493, 3.5592, 3.57155, 3.58141, 3.59124, 3.60105, 3.61084, 3.6206, 3.63277,
                                  3.64248, 3.65217, 3.66184, 3.67389, 3.68351, 3.69311, 3.70268, 3.71461, 3.72414,
                                  3.73364, 3.74549, 3.75494, 3.76437, 3.77613, 3.78551, 3.79487, 3.80654, 3.81586,
                                  3.82747, 3.83673, 3.84829, 3.85751, 3.8667, 3.87817, 3.88732, 3.89873, 3.90784,
                                  3.91919, 3.92825, 3.93955, 3.94856, 3.9598, 3.96877, 3.97995, 3.9911, 4, 4.0111,
                                  4.01995, 4.03099, 4.042, 4.05079, 4.06174, 4.07048, 4.08139, 4.09226, 4.10093,
                                  4.11175, 4.12254, 4.1333, 4.14188, 4.15259, 4.16327, 4.17391, 4.18241, 4.19301,
                                  4.20357, 4.21411, 4.22252, 4.23301, 4.24347, 4.2539, 4.2643, 4.27468, 4.28503,
                                  4.29328, 4.30358, 4.31385, 4.32409, 4.33431, 4.3445, 4.35466, 4.36479, 4.3749,
                                  4.38498, 4.39504, 4.40506, 4.41506, 4.42504, 4.43499, 4.44491, 4.45481, 4.46468,
                                  4.47452, 4.48434, 4.49414, 4.5039, 4.51559, 4.5253, 4.53499, 4.54465, 4.55429,
                                  4.5639, 4.57349, 4.58496, 4.5945, 4.60401, 4.61349, 4.62484, 4.63427, 4.64368,
                                  4.65306, 4.66429, 4.67362, 4.68293, 4.69221, 4.70332, 4.71255, 4.72176, 4.73278,
                                  4.74194, 4.75289, 4.762, 4.77108, 4.78195, 4.79099};
    float celula[34];
    float _celula[34]
    int temp[12];
    int _temp[12];
    float corrente;
    float tensaoTotal;
    int temperaturaMedia

    const int MUX0_CONTROLA = 37;
    const int MUX0_CONTROLB = 36;
    const int MUX0_CONTROLC = 35;

    const int MUX1_CONTROLA = 34;
    const int MUX1_CONTROLB = 33;
    const int MUX1_CONTROLC = 32;

    const int MUX2_CONTROLA = 31;
    const int MUX2_CONTROLB = 30;
    const int MUX2_CONTROLC = 10;

    const int MUX3_CONTROLA = 11;
    const int MUX3_CONTROLB = 12;
    const int MUX3_CONTROLC = 13;

    const int MUX4_CONTROLA = 41;
    const int MUX4_CONTROLB = 40;
    const int MUX4_CONTROLC = 39;

    const int MUX5_CONTROLA = 6;
    const int MUX5_CONTROLB = 7;
    const int MUX5_CONTROLC = 8;

    const int FILTER_OUT0 = A0;
    const int FILTER_OUT1 = A1;
    const int FILTER_OUT2 = A2;
    const int FILTER_OUT3 = A3;
    const int FILTER_OUT4 = A4;
    const int FILTER_OUT5 = A5;
    const int HALL = A15;

    const int BMS_OUT = 5;
    const int WARNING_LED = 3;

    const int V0 = 44;

    LiquidCrystal lcd(5, 6, 7, 8, 9, 10);
    MCP_CAN CAN0(53);

private:
    void setChannel(int, int);
    int adcRead(int);
    void warning();
    void tError();

public:
    void BMS(boolean);
    void begin();
    void read();
    float getTensao(int);
    float getCorrente();
    int getTemperatura(int);
    //void check();
    void CANReceive();
    void CANSend();
    void DisplayReceive();
    void DisplaySend();
    float getTensaoTotal();
    float getTensaoMedia();
    int getTemperaturaMedia();

};

#endif // BMS_H
