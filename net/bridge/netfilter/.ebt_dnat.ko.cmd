cmd_net/bridge/netfilter/ebt_dnat.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/bridge/netfilter/ebt_dnat.ko net/bridge/netfilter/ebt_dnat.o net/bridge/netfilter/ebt_dnat.mod.o;  true