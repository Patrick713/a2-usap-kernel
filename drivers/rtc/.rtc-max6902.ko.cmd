cmd_drivers/rtc/rtc-max6902.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/rtc/rtc-max6902.ko drivers/rtc/rtc-max6902.o drivers/rtc/rtc-max6902.mod.o;  true
