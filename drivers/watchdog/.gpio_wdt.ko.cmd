cmd_drivers/watchdog/gpio_wdt.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/watchdog/gpio_wdt.ko drivers/watchdog/gpio_wdt.o drivers/watchdog/gpio_wdt.mod.o;  true