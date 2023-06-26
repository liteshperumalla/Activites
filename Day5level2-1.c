#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char sensor_id[3];
    float temperature;
    int humidity;
    int light_intensity;
} SensorData;
void parse_data(const char* data, SensorData* sensor_info, int num_sensors) {
    char* data_copy = strdup(data);
    char* token = strtok(data_copy, "-");
    int i = 0;
    while (token != NULL && i < num_sensors) {
        sscanf(token, "%2s-T:%f-H:%d-L:%d", sensor_info[i].sensor_id, &sensor_info[i].temperature, 
               &sensor_info[i].humidity, &sensor_info[i].light_intensity);

        token = strtok(NULL, "-");
        i++;
    }
    free(data_copy);  
}
int main() {
    const char* data = "S1-T:36.5-H:100-L:50";
    int num_sensors = 1;  
    SensorData sensor_info[num_sensors];
    parse_data(data, sensor_info, num_sensors);
    printf("Sensor Info:\n");
    for (int i = 0; i < num_sensors; i++) {
        printf("Sensor ID: %s\n", sensor_info[i].sensor_id);
        printf("Temperature: %.1f C\n", sensor_info[i].temperature);
        printf("Humidity: %d\n", sensor_info[i].humidity);
        printf("Light Intensity: %d%%\n", sensor_info[i].light_intensity);
    }
    return 0;
}
