cmd_drivers/rtc/rtc-x1205.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/rtc/rtc-x1205.ko drivers/rtc/rtc-x1205.o drivers/rtc/rtc-x1205.mod.o;  true