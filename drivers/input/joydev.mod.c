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
	{ 0xa0337a7f, "no_llseek" },
	{ 0x261ca2ac, "input_unregister_handler" },
	{ 0xb7d016cb, "input_register_handler" },
	{ 0x9d669763, "memcpy" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x97255bdf, "strlen" },
	{ 0xbb72d4fe, "__put_user_1" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x1000e51, "schedule" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5f754e5a, "memset" },
	{ 0x71c90087, "memcmp" },
	{ 0x1c9c3144, "input_match_device_id" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc5850110, "printk" },
	{ 0x26800c62, "cdev_device_add" },
	{ 0xad534415, "cdev_init" },
	{ 0x4763aaad, "input_register_handle" },
	{ 0x9dc3b2ba, "device_initialize" },
	{ 0x27a8f3da, "input_class" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0xde147102, "get_device" },
	{ 0xe54dbfa5, "dev_set_name" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc0ff21c1, "input_get_new_minor" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x3ca0c169, "input_open_device" },
	{ 0x2dfdedea, "stream_open" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b00de61, "fasync_helper" },
	{ 0xebcc8bdd, "put_device" },
	{ 0x52271266, "input_unregister_handle" },
	{ 0x5cf53ce2, "input_free_minor" },
	{ 0x38c891ae, "cdev_device_del" },
	{ 0xc6fef68e, "input_close_device" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x9707a604, "kill_fasync" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*0,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*2,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*8,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*6,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*120,*r*a*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*130,*r*a*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*2C0,*r*a*m*l*s*f*w*");

MODULE_INFO(srcversion, "8F2ECAEAD99867414C85442");
