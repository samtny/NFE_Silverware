

typedef struct debug
{
	int gyroid;
  
  float adc_read_0;
  float adc_read_1;
  float vreffilt;
  float battadc;
  float thrsum;
  float thrfilt;
  float vbattfilt_corr;
  float filtercalc;
  float vbattfilt;
  float tempvolt;
  float vdrop_factor;
  float throttle_compensated_voltage;
  
	float vbatt_comp;
	float adcfilt;
	float totaltime;	
	float timefilt;
    float adcreffilt;
	float cpu_load;
} debug_type;




