cmd_net/atm/pppoatm.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/atm/pppoatm.ko net/atm/pppoatm.o net/atm/pppoatm.mod.o;  true
