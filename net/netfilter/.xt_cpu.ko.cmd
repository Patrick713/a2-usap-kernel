cmd_net/netfilter/xt_cpu.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/netfilter/xt_cpu.ko net/netfilter/xt_cpu.o net/netfilter/xt_cpu.mod.o;  true