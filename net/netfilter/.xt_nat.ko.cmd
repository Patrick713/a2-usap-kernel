cmd_net/netfilter/xt_nat.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/netfilter/xt_nat.ko net/netfilter/xt_nat.o net/netfilter/xt_nat.mod.o;  true
