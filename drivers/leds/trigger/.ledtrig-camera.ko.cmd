cmd_drivers/leds/trigger/ledtrig-camera.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/leds/trigger/ledtrig-camera.ko drivers/leds/trigger/ledtrig-camera.o drivers/leds/trigger/ledtrig-camera.mod.o;  true
