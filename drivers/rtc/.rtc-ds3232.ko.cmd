cmd_drivers/rtc/rtc-ds3232.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/rtc/rtc-ds3232.ko drivers/rtc/rtc-ds3232.o drivers/rtc/rtc-ds3232.mod.o;  true