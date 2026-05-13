# Extra sources for camera and additional modules
CAMERA_SOURCES = apps/camera/camera_app.c drivers/camera/camera_driver.c drivers/i2c/i2c.c
CODEC_SOURCES = libs/image_codecs/jpeg_encoder.c libs/image_codecs/png_decoder.c libs/audio_codecs/aac_decoder.c
EXTRA_DRIVERS = drivers/touch_capacitive/capsense.c drivers/adc/adc.c
MESH_CRYPTO = libs/protocols/mesh/crypto.c
SETTINGS = fs/manager/settings_store.c
POWER_EXTRA = kernel/power/battery_monitor.c

all_extra: $(CAMERA_SOURCES:.c=.o) $(CODEC_SOURCES:.c=.o) $(EXTRA_DRIVERS:.c=.o) $(MESH_CRYPTO:.c=.o) $(SETTINGS:.c=.o) $(POWER_EXTRA:.c=.o)