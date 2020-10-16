cmd_net/can/can.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/can/can.ko net/can/can.o net/can/can.mod.o;  true
