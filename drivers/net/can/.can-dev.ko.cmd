cmd_drivers/net/can/can-dev.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/net/can/can-dev.ko drivers/net/can/can-dev.o drivers/net/can/can-dev.mod.o;  true