cmd_net/netfilter/xt_u32.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/netfilter/xt_u32.ko net/netfilter/xt_u32.o net/netfilter/xt_u32.mod.o;  true