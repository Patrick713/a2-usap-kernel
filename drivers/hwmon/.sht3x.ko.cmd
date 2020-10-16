cmd_drivers/hwmon/sht3x.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/hwmon/sht3x.ko drivers/hwmon/sht3x.o drivers/hwmon/sht3x.mod.o;  true
