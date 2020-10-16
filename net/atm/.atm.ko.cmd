cmd_net/atm/atm.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/atm/atm.ko net/atm/atm.o net/atm/atm.mod.o;  true
