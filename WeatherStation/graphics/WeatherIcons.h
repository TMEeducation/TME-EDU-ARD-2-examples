const uint8_t icons[8][512] PROGMEM = {
	// 'cloud_sun_1, 64x64px
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x18, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x10, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x04, 0x10, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x0e, 0x00, 
	0x00, 0x00, 0x00, 0x06, 0x03, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0x7e, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x81, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0xff, 0x80, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x27, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xe0, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xf3, 0xf8, 
	0x00, 0x00, 0x00, 0x1f, 0xdf, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xf0, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xf0, 0x00, 0x00, 0x01, 0xfc, 0x07, 0xcf, 0xff, 0xf0, 0x00, 
	0x00, 0x07, 0xff, 0x0f, 0xef, 0xff, 0xe0, 0x00, 0x00, 0x0f, 0xff, 0x9f, 0xf7, 0xff, 0xc0, 0x00, 
	0x00, 0x1f, 0xff, 0xff, 0xfb, 0xff, 0xc0, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xfd, 0xff, 0x86, 0x00, 
	0x00, 0x7f, 0xff, 0xff, 0xfe, 0xff, 0x03, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0x3c, 0x01, 0x80, 
	0x3f, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x80, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x40, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0x80, 0x40, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x80, 0x60, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0xc0, 0x20, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x40, 0x00, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x40, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x60, 0x00, 
	0x7f, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 
	0x1f, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 
	0x0f, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x07, 0xff, 0xf8, 0xff, 0xf0, 0x00, 0x00, 0x00, 
	0x00, 0x3f, 0xe0, 0x1f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, 
	
	// 'cloud_sun_2, 64x64px
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x20, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xc0, 0x20, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x20, 0x1c, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x40, 0x20, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x20, 0x40, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x7e, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x11, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0x80, 0x08, 
	0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xc0, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xe7, 0x80, 
	0x00, 0x00, 0x00, 0x7c, 0x0f, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x07, 0x9f, 0xff, 0xf0, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xdf, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xf0, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xf0, 0x00, 0x00, 0x01, 0xfc, 0x07, 0xcf, 0xff, 0xf0, 0x00, 
	0x00, 0x07, 0xff, 0x0f, 0xef, 0xff, 0xe7, 0x00, 0x00, 0x0f, 0xff, 0x9f, 0xf7, 0xff, 0xc1, 0x80, 
	0x00, 0x1f, 0xff, 0xff, 0xfb, 0xff, 0xc0, 0x60, 0x00, 0x3f, 0xff, 0xff, 0xfd, 0xff, 0x80, 0x30, 
	0x00, 0x7f, 0xff, 0xff, 0xfe, 0xff, 0x00, 0x10, 0x1f, 0xff, 0xff, 0xff, 0xff, 0x3c, 0x00, 0x00, 
	0x3f, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x20, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x30, 0x00, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x10, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x10, 0x00, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x0c, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x04, 0x00, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x06, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x02, 0x00, 
	0x7f, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 
	0x1f, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 
	0x0f, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x07, 0xff, 0xf8, 0xff, 0xf0, 0x00, 0x00, 0x00, 
	0x00, 0x3f, 0xe0, 0x1f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, 
	
	// 'rain_1, 64x64px
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 
	0x00, 0x01, 0xff, 0xc0, 0x01, 0xff, 0x80, 0x00, 0x00, 0x07, 0xff, 0xe0, 0x1f, 0xff, 0x80, 0x00, 
	0x00, 0x1f, 0xff, 0xf0, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x1f, 0xff, 0xf8, 0x7f, 0xff, 0xfc, 0x00, 
	0x00, 0x3f, 0xff, 0xf0, 0xff, 0xff, 0xff, 0x00, 0x00, 0x7f, 0xff, 0xe7, 0xff, 0xff, 0xff, 0x80, 
	0x01, 0xff, 0xff, 0x8f, 0xff, 0xff, 0xff, 0xc0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
	0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
	0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
	0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
	0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
	0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x07, 0xf8, 0x0f, 0xff, 0x00, 
	0x00, 0x1f, 0xf0, 0x40, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x80, 0x40, 0x01, 0x08, 0x00, 0x00, 0x00, 0x40, 0x80, 0x40, 0x81, 0x08, 0x00, 0x00, 
	0x00, 0x40, 0x80, 0x00, 0x81, 0x08, 0x10, 0x80, 0x00, 0x40, 0x80, 0x00, 0x81, 0x08, 0x10, 0x80, 
	0x00, 0x08, 0x00, 0x00, 0x80, 0x00, 0x10, 0x80, 0x00, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x80, 
	0x00, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x04, 0x00, 0x00, 
	0x00, 0x00, 0x40, 0x40, 0x40, 0x04, 0x08, 0x80, 0x00, 0x00, 0x40, 0x40, 0x40, 0x04, 0x08, 0x80, 
	0x00, 0x40, 0x40, 0x40, 0x42, 0x00, 0x08, 0x80, 0x00, 0x40, 0x40, 0x00, 0x02, 0x00, 0x08, 0x80, 
	0x00, 0x40, 0x02, 0x00, 0x02, 0x00, 0x00, 0x80, 0x00, 0x40, 0x02, 0x00, 0x02, 0x20, 0x00, 0x00, 
	0x00, 0x00, 0x02, 0x10, 0x02, 0x20, 0x40, 0x00, 0x00, 0x02, 0x00, 0x10, 0x00, 0x20, 0x40, 0x00, 
	0x00, 0x02, 0x00, 0x10, 0x20, 0x20, 0x42, 0x00, 0x00, 0x02, 0x00, 0x00, 0x20, 0x20, 0x42, 0x00, 
	0x00, 0x40, 0x10, 0x02, 0x20, 0x00, 0x42, 0x00, 0x00, 0x40, 0x10, 0x02, 0x20, 0x00, 0x02, 0x00, 
	0x00, 0x40, 0x10, 0x82, 0x20, 0x00, 0x02, 0x00, 0x00, 0x04, 0x10, 0x82, 0x00, 0x20, 0x00, 0x00, 
	0x00, 0x04, 0x00, 0x82, 0x00, 0x20, 0x10, 0x00, 0x00, 0x04, 0x00, 0x80, 0x00, 0x22, 0x10, 0x00, 
	0x00, 0x04, 0x00, 0x00, 0x00, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x02, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 
	0x00, 0x21, 0x08, 0x10, 0x80, 0x80, 0x02, 0x00, 0x00, 0x21, 0x08, 0x10, 0x80, 0x80, 0x02, 0x00, 
	0x00, 0x01, 0x08, 0x10, 0x80, 0x80, 0x82, 0x00, 0x00, 0x01, 0x08, 0x10, 0x00, 0x80, 0x82, 0x00, 
	0x00, 0x00, 0x00, 0x10, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, 
	
	// 'rain_2, 64x64px
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 
	0x00, 0x01, 0xff, 0xc0, 0x01, 0xff, 0x80, 0x00, 0x00, 0x07, 0xff, 0xe0, 0x1f, 0xff, 0x80, 0x00, 
	0x00, 0x1f, 0xff, 0xf0, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x1f, 0xff, 0xf8, 0x7f, 0xff, 0xfc, 0x00, 
	0x00, 0x3f, 0xff, 0xf0, 0xff, 0xff, 0xff, 0x00, 0x00, 0x7f, 0xff, 0xe7, 0xff, 0xff, 0xff, 0x80, 
	0x01, 0xff, 0xff, 0x8f, 0xff, 0xff, 0xff, 0xc0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
	0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
	0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
	0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
	0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
	0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x07, 0xf8, 0x0f, 0xff, 0x00, 
	0x00, 0x1f, 0xf0, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00, 0x00, 
	0x00, 0x04, 0x20, 0x10, 0x01, 0x00, 0x80, 0x00, 0x00, 0x04, 0x20, 0x10, 0x01, 0x00, 0x80, 0x00, 
	0x00, 0x04, 0x20, 0x00, 0x40, 0x00, 0x80, 0x00, 0x00, 0x04, 0x00, 0x00, 0x40, 0x00, 0x80, 0x00, 
	0x00, 0x04, 0x02, 0x00, 0x40, 0x80, 0x81, 0x00, 0x00, 0x00, 0x02, 0x00, 0x40, 0x80, 0x01, 0x00, 
	0x00, 0x20, 0x22, 0x10, 0x00, 0x80, 0x01, 0x00, 0x00, 0x20, 0x20, 0x10, 0x00, 0x80, 0x01, 0x00, 
	0x00, 0x20, 0x20, 0x10, 0x00, 0x04, 0x01, 0x00, 0x00, 0x00, 0x20, 0x10, 0x08, 0x04, 0x20, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x88, 0x04, 0x20, 0x00, 0x00, 0x04, 0x02, 0x00, 0x88, 0x00, 0x20, 0x00, 
	0x00, 0x04, 0x02, 0x20, 0x88, 0x40, 0x20, 0x00, 0x00, 0x04, 0x22, 0x20, 0x80, 0x40, 0x00, 0x00, 
	0x00, 0x00, 0x20, 0x20, 0x20, 0x40, 0x01, 0x00, 0x00, 0x00, 0x20, 0x24, 0x24, 0x00, 0x81, 0x00, 
	0x00, 0x00, 0x00, 0x04, 0x24, 0x10, 0x81, 0x00, 0x00, 0x01, 0x00, 0x04, 0x04, 0x10, 0x81, 0x00, 
	0x00, 0x01, 0x08, 0x44, 0x00, 0x10, 0x00, 0x00, 0x00, 0x01, 0x08, 0x40, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x08, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x08, 0x00, 0x00, 0x80, 0x08, 0x00, 
	0x00, 0x10, 0x00, 0x04, 0x10, 0x84, 0x08, 0x00, 0x00, 0x11, 0x00, 0x04, 0x10, 0x84, 0x08, 0x00, 
	0x00, 0x01, 0x00, 0x04, 0x10, 0x84, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x10, 0x00, 0x40, 0x00, 
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x09, 0x10, 0x00, 0x08, 0x42, 0x00, 
	0x00, 0x10, 0x08, 0x10, 0x00, 0x08, 0x02, 0x00, 0x00, 0x10, 0x08, 0x10, 0x02, 0x08, 0x02, 0x00, 
	0x00, 0x00, 0x28, 0x00, 0x82, 0x00, 0x22, 0x00, 0x00, 0x00, 0x20, 0x40, 0x82, 0x00, 0x20, 0x00, 
	0x00, 0x04, 0x20, 0x40, 0x02, 0x20, 0x20, 0x00, 0x00, 0x04, 0x20, 0x40, 0x00, 0x20, 0x00, 0x00, 
	0x00, 0x04, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, 
	
	// 'storm_1, 64x64px
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 
	0x00, 0x01, 0xff, 0xc0, 0x01, 0xff, 0x80, 0x00, 0x00, 0x07, 0xff, 0xe0, 0x1f, 0xff, 0x80, 0x00, 
	0x00, 0x1f, 0xff, 0xf0, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x1f, 0xff, 0xf8, 0x7f, 0xff, 0xfc, 0x00, 
	0x00, 0x3f, 0xff, 0xf0, 0xff, 0xff, 0xff, 0x00, 0x00, 0x7f, 0xff, 0xe7, 0xff, 0xff, 0xff, 0x80, 
	0x01, 0xff, 0xff, 0x8f, 0xff, 0xff, 0xff, 0xc0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
	0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
	0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
	0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
	0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
	0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x07, 0xf8, 0x0f, 0xff, 0x00, 
	0x00, 0x1f, 0xf0, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x03, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x07, 0xff, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x0f, 0xfe, 0x00, 0x00, 0x1f, 0xe0, 0x00, 
	0x00, 0x1f, 0xfc, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x1f, 0xf8, 0x00, 0x00, 0x7f, 0xc0, 0x00, 
	0x00, 0x3f, 0xf8, 0x00, 0x00, 0xff, 0x80, 0x00, 0x00, 0x7f, 0xf0, 0x00, 0x01, 0xff, 0x00, 0x00, 
	0x00, 0x7f, 0xf0, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x00, 0xff, 0xff, 0xf8, 0x07, 0xfc, 0x00, 0x00, 
	0x01, 0xff, 0xff, 0xf8, 0x0f, 0xfc, 0x00, 0x00, 0x01, 0xff, 0xff, 0xf8, 0x1f, 0xff, 0xf0, 0x00, 
	0x03, 0xff, 0xff, 0xf8, 0x3f, 0xff, 0xe0, 0x00, 0x03, 0xff, 0xff, 0xf0, 0x3f, 0xff, 0xc0, 0x00, 
	0x03, 0xff, 0xff, 0xe0, 0x7f, 0xff, 0x80, 0x00, 0x00, 0x00, 0x1f, 0xc0, 0x7f, 0xff, 0x00, 0x00, 
	0x00, 0x00, 0x3f, 0x80, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x00, 0xfc, 0x00, 0x00, 
	0x00, 0x00, 0x7e, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x00, 0xf0, 0x00, 0x00, 
	0x00, 0x00, 0xf8, 0x00, 0x01, 0xe0, 0x00, 0x00, 0x00, 0x01, 0xf0, 0x00, 0x01, 0xc0, 0x00, 0x00, 
	0x00, 0x03, 0xe0, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x00, 0x0f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, 
	
	// 'storm_2, 64x64px
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 
	0x00, 0x01, 0xff, 0xc0, 0x01, 0xff, 0x80, 0x00, 0x00, 0x07, 0xff, 0xe0, 0x1f, 0xff, 0x80, 0x00, 
	0x00, 0x1f, 0xff, 0xf0, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x1f, 0xff, 0xf8, 0x7f, 0xff, 0xfc, 0x00, 
	0x00, 0x3f, 0xff, 0xf0, 0xff, 0xff, 0xff, 0x00, 0x00, 0x7f, 0xff, 0xe7, 0xff, 0xff, 0xff, 0x80, 
	0x01, 0xff, 0xff, 0x8f, 0xff, 0xff, 0xff, 0xc0, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
	0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
	0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
	0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
	0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
	0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
	0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x07, 0xf8, 0x0f, 0xff, 0x00, 
	0x00, 0x1f, 0xf0, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x7f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x03, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x07, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xfe, 0x00, 0x00, 0x01, 0xfe, 0x00, 0x00, 
	0x0f, 0xfe, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x1f, 0xff, 0xff, 0x00, 0x07, 0xf8, 0x00, 0x00, 
	0x3f, 0xff, 0xff, 0x00, 0x0f, 0xf8, 0x00, 0x00, 0x3f, 0xff, 0xff, 0x00, 0x1f, 0xf0, 0x00, 0x00, 
	0x7f, 0xff, 0xff, 0x00, 0x3f, 0xe0, 0x00, 0x00, 0x7f, 0xff, 0xfe, 0x00, 0x7f, 0xc0, 0x00, 0x00, 
	0x7f, 0xff, 0xfc, 0x00, 0xff, 0x80, 0x00, 0x00, 0x00, 0x03, 0xf8, 0x01, 0xff, 0x80, 0x00, 0x00, 
	0x00, 0x07, 0xf0, 0x03, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x0f, 0xe0, 0x07, 0xff, 0xfc, 0x00, 0x00, 
	0x00, 0x0f, 0xc0, 0x07, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x1f, 0x80, 0x0f, 0xff, 0xf0, 0x00, 0x00, 
	0x00, 0x1f, 0x00, 0x0f, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x0f, 0xc0, 0x00, 0x00, 
	0x00, 0x7c, 0x00, 0x00, 0x1f, 0x80, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 
	0x01, 0xf0, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x01, 0xe0, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 
	0x03, 0xc0, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, 
	
	// 'sun_2, 64x64px
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x18, 0x03, 0xc0, 0x18, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x03, 0xc0, 0x3c, 0x00, 0x00, 
	0x00, 0x00, 0x3e, 0x03, 0xc0, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0xf8, 0x00, 0x00, 
	0x00, 0x00, 0x0f, 0x80, 0x01, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xc3, 0xc3, 0xe0, 0x00, 0x00, 
	0x00, 0x00, 0x03, 0x0f, 0xf0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x01, 0x3f, 0xfc, 0x80, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x7f, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xfe, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 
	0x03, 0xff, 0xf9, 0xff, 0xff, 0x9f, 0xff, 0xc0, 0x03, 0xff, 0xf9, 0xff, 0xff, 0x9f, 0xff, 0xc0, 
	0x03, 0xff, 0xf9, 0xff, 0xff, 0x9f, 0xff, 0xc0, 0x03, 0xff, 0xf9, 0xff, 0xff, 0x9f, 0xff, 0xc0, 
	0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x7f, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xfe, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0x3f, 0xfc, 0x80, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0f, 0xf0, 0xc0, 0x00, 0x00, 
	0x00, 0x00, 0x07, 0xc3, 0xc3, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x80, 0x01, 0xf0, 0x00, 0x00, 
	0x00, 0x00, 0x1f, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x03, 0xc0, 0x7c, 0x00, 0x00, 
	0x00, 0x00, 0x3c, 0x03, 0xc0, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x18, 0x03, 0xc0, 0x18, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, 
	
	// 'sun_4, 64x64px
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x0f, 0x00, 0x03, 0xc0, 0x00, 0xf0, 0x00, 
	0x00, 0x0f, 0x80, 0x03, 0xc0, 0x01, 0xf0, 0x00, 0x00, 0x07, 0xc0, 0x03, 0xc0, 0x03, 0xe0, 0x00, 
	0x00, 0x03, 0xe0, 0x03, 0xc0, 0x07, 0xc0, 0x00, 0x00, 0x01, 0xf0, 0x03, 0xc0, 0x0f, 0x80, 0x00, 
	0x00, 0x00, 0xf8, 0x03, 0xc0, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x03, 0xc0, 0x3e, 0x00, 0x00, 
	0x00, 0x00, 0x3e, 0x03, 0xc0, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0xf8, 0x00, 0x00, 
	0x00, 0x00, 0x0f, 0x80, 0x01, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xc3, 0xc3, 0xe0, 0x00, 0x00, 
	0x00, 0x00, 0x03, 0x0f, 0xf0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x01, 0x3f, 0xfc, 0x80, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x7f, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xfe, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 
	0x00, 0x07, 0xf9, 0xff, 0xff, 0x9f, 0xe0, 0x00, 0x00, 0x07, 0xf9, 0xff, 0xff, 0x9f, 0xe0, 0x00, 
	0x00, 0x07, 0xf9, 0xff, 0xff, 0x9f, 0xe0, 0x00, 0x00, 0x07, 0xf9, 0xff, 0xff, 0x9f, 0xe0, 0x00, 
	0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x7f, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xfe, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0x3f, 0xfc, 0x80, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0f, 0xf0, 0xc0, 0x00, 0x00, 
	0x00, 0x00, 0x07, 0xc3, 0xc3, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x80, 0x01, 0xf0, 0x00, 0x00, 
	0x00, 0x00, 0x1f, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x03, 0xc0, 0x7c, 0x00, 0x00, 
	0x00, 0x00, 0x7c, 0x03, 0xc0, 0x3e, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x03, 0xc0, 0x1f, 0x00, 0x00, 
	0x00, 0x01, 0xf0, 0x03, 0xc0, 0x0f, 0x80, 0x00, 0x00, 0x03, 0xe0, 0x03, 0xc0, 0x07, 0xc0, 0x00, 
	0x00, 0x07, 0xc0, 0x03, 0xc0, 0x03, 0xe0, 0x00, 0x00, 0x0f, 0x80, 0x03, 0xc0, 0x01, 0xf0, 0x00, 
	0x00, 0x0f, 0x00, 0x03, 0xc0, 0x00, 0xf0, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
};