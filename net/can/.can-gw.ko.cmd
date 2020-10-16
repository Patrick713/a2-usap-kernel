cmd_net/can/can-gw.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/can/can-gw.ko net/can/can-gw.o net/can/can-gw.mod.o;  true
