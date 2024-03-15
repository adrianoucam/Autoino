#define Uno   //Descomente essa linha caso utilizar um Arduino UNO ou Nano
//#define Mega  //Descomente essa linha caso utilizar um Arduino Mega

#ifdef Uno
#define pino_sensor_roda_fonica 2
#define pino_sensor_fase 3
#define pino_sensor_map A0
#define pino_sensor_tps A1
#define pino_sensor_clt A2
#define pino_sensor_iat A3
#define pino_sensor_o2  A4
#define pino_sensor_brv A5
byte ign1 = 4;
byte ign2 = 5;
byte ign3 = 6;
byte ign4 = 7;
byte inj1 = 8;
byte inj2 = 9;
byte inj3 = 12;
byte inj4 = 13;
#endif
#ifdef Mega
#define pino_sensor_roda_fonica 19
#define pino_sensor_fase 18
#define pino_sensor_clt A1
#define pino_sensor_tps A2
#define pino_sensor_map A3
byte ign1 = 40;
byte ign2 = 38;
byte ign3 = 52;
byte ign4 = 50;
byte inj1 = 8;
byte inj2 = 9;
byte inj3 = 10;
byte inj4 = 11;
#endif
