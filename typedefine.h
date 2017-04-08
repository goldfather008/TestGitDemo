#ifndef TYPEDEFINE
#define TYPEDEFINE

typedef struct account{
    QString userName;
    QString cardID;
    int monney;
    QString state;
}Account;
typedef struct bike{
    QString borrowTime;
    QString borrowLocation;
    QString returnTime;
    QString returnLocation;
}Bike;
typedef struct bikestation{
    QString stationName;
    int borrowNum;
    int returnNum;
}Bikestation;

#endif // TYPEDEFINE

