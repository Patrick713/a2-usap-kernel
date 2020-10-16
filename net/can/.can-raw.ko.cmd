cmd_net/can/can-raw.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/can/can-raw.ko net/can/can-raw.o net/can/can-raw.mod.o;  true
