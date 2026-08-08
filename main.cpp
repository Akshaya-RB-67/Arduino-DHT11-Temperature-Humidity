#include <DHT11.h>

DHT11 dht11(22);

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    int temperature = 0;
    int humidity = 0;

    int result = dht11.readTemperatureHumidity(temperature, humidity);

    if (result == 0)
    {
        Serial.print("Temperature : ");
        Serial.println(temperature);

        Serial.print("°C\t Humidity : ");
        Serial.println(humidity);

        Serial.print("%");
    }
    else
    {
        Serial.println(DHT11::getErrorString(result));
    }
}
