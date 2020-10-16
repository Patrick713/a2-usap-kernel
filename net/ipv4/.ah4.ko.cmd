cmd_net/ipv4/ah4.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/ipv4/ah4.ko net/ipv4/ah4.o net/ipv4/ah4.mod.o;  true
