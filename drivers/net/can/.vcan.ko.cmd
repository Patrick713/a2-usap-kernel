cmd_drivers/net/can/vcan.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/net/can/vcan.ko drivers/net/can/vcan.o drivers/net/can/vcan.mod.o;  true