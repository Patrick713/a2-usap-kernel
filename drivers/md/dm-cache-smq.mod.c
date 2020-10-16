#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x60bffe6d, "div64_u64" },
	{ 0xefbca4c, "btracker_promotion_already_present" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xa2365f44, "btracker_issue" },
	{ 0x999e8297, "vfree" },
	{ 0xbf1a2968, "btracker_create" },
	{ 0x8fb053d8, "dm_cache_policy_register" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x5adc2807, "btracker_destroy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x668b595, "_kstrtoul" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0xccfe6409, "btracker_nr_demotions_queued" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xa7eadcb5, "btracker_complete" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x53bcd841, "dm_cache_policy_unregister" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x87bee547, "btracker_queue" },
};

MODULE_INFO(depends, "dm-cache");


MODULE_INFO(srcversion, "33859D75F46E08088EA25E2");