cmd_drivers/net/hamradio/hdlcdrv.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/net/hamradio/hdlcdrv.ko drivers/net/hamradio/hdlcdrv.o drivers/net/hamradio/hdlcdrv.mod.o;  true