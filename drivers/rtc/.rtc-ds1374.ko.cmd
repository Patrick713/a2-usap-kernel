cmd_drivers/rtc/rtc-ds1374.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/rtc/rtc-ds1374.ko drivers/rtc/rtc-ds1374.o drivers/rtc/rtc-ds1374.mod.o;  true