cmd_drivers/net/hamradio/6pack.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/net/hamradio/6pack.ko drivers/net/hamradio/6pack.o drivers/net/hamradio/6pack.mod.o;  true