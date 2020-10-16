cmd_net/nsh/nsh.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/nsh/nsh.ko net/nsh/nsh.o net/nsh/nsh.mod.o;  true
