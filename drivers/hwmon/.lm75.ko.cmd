cmd_drivers/hwmon/lm75.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/hwmon/lm75.ko drivers/hwmon/lm75.o drivers/hwmon/lm75.mod.o;  true
