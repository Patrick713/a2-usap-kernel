cmd_drivers/rtc/rtc-em3027.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/rtc/rtc-em3027.ko drivers/rtc/rtc-em3027.o drivers/rtc/rtc-em3027.mod.o;  true