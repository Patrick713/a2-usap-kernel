cmd_drivers/power/supply/ltc2941-battery-gauge.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/power/supply/ltc2941-battery-gauge.ko drivers/power/supply/ltc2941-battery-gauge.o drivers/power/supply/ltc2941-battery-gauge.mod.o;  true