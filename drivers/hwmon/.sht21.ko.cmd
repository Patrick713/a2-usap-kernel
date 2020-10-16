cmd_drivers/hwmon/sht21.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/hwmon/sht21.ko drivers/hwmon/sht21.o drivers/hwmon/sht21.mod.o;  true
