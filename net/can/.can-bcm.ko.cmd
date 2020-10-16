cmd_net/can/can-bcm.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/can/can-bcm.ko net/can/can-bcm.o net/can/can-bcm.mod.o;  true
